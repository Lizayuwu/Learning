import string
import random

commonNames = ["John", "Marc", "Robinson", "Helena", "Daniel", "Karl"]
cards = ["A","2","3","4","5","6","7","8","9","10","Jack","Queen","King"]
suits = ["of Spades","of Hearts", "of Diamonds", "of Clubs"]
value = {"a" : 1,
         "queen" : 10,
         "king" : 10,
         "Jack" : 10,
         "2" : 2,
         "3" : 3,
         "4" : 4,
         "5" : 5,
         "6" : 6,
         "7" : 7,
         "8" : 8,
         "9" : 9,
         "10" : 10
        }
deck = [(x+" "+y) for x in cards for y in suits]

class Cassino:

    def __init__(self, *args, **kwargs):
        self.tables = []
        self.dealers = []
        self.tableID = 0
        return super().__init__(*args, **kwargs)

    def __str__(self):
        return f"{self.tables}"
    def __repr__(self):
        return super().__repr__()

    def openTable(self):
        self.dealers.append(Dealer())
        self.tables.append(Table(self.dealers[-1], self.tableID))
        self.tableID += 1
        return f"{self.tables}"

    def getTableByDealer(self, dealer_name):
        for table in self.tables:
            if table.dealer.name == dealer_name:
                return table
        return "Not Found"

    def getTables(self):
        return self.tables
        

            
class Table:
    def __init__(self, dealer, tableID):
        self.dealer = dealer
        self.players = []
        dealer.table = tableID
        return super().__init__()
    
    def __str__(self):
        return f"Player list: {self.players}\nDealer: {self.dealer}"
            
    def __repr__(self):
        return f"Player list: {self.players} Dealer: {self.dealer}"

    def addPlayer(self, *args):
        for player in args:
            if player in self.players:
                return f"Player {player.name} is already in this game"
            self.players.append(player)
        return f"{self.players[-1]} joined the game"
    

class Player:

    def __init__(self, name):
        self.hand = []
        self.name = f"{name}#{random.randint(0,9999)}"
        self.willPlayThisTurn = True
        self.money = 0
        return super().__init__()

    def  sitAtTable(self, table):
        table.addPlayer(self)

    def __str__(self):
        return f"Name: {self.name}"

    def __repr__(self):
        return f"{self.name}"
        

class Dealer:
    def __init__(self):
        self.deck = deck
        self.name = f"{random.choice(commonNames)}#{random.randint(0,9999)}"
        self.table = "No table set yet"
        return super().__init__()

    def __str__(self):
        return f"{self.name} is a dealer at table {self.table}"

    def __repr__(self):
        return self.name

    def _setTable(table):
        self.table = table

    def getTable(self):
        return self.table

    def _shuffle(self):
        random.shuffle(self.deck)
        return f"Dealer {self.name} from table {self.table} shuffles the deck"

    def deal(self, player, amount):
        self._shuffle()
        for card in range(0,amount):
            player.hand.append(self.deck.pop())
        print(f"Player {player.name} was dealt {amount} cards from {self.name} at table {self.table}")
        return

def getBlackjackHandValue(hand):
    blackjackValue = dict(value)
    strippedHand = [card.split()[0].lower() for card in hand]
    if ('a' and 'queen' or 'king' or 'jack') in strippedHand:
        blackjackValue['a'] = 11
    handValue = list(map(lambda x: blackjackValue.get(x), strippedHand ))
    return sum(handValue)

def blackjack(table):
    isPlaying = True
    startingCardsWereDealt = False
    winners = []
    players = table.players
    dealer = table.dealer
    print(table)
    while isPlaying:
        if not startingCardsWereDealt:
            for player in players:
                dealer.deal(player, 2)
                startingCardsWereDealt = True
        for player in players:
            while(True):
                if player.willPlayThisTurn:
                    print(f"{player.name}, Select your action:\n\tHit\n\tStop\nyour hand is {player.hand}\t worth {getBlackjackHandValue(player.hand)}")
                    action = input()
                    if action.lower() == "hit":
                        dealer.deal(player, 1)
                    elif action.lower() == "stop":
                        player.willPlayThisTurn = False
                        break
                    elif action.lower() == "stand":
                        isPlaying = False
                    else:
                        continue
                if getBlackjackHandValue(player.hand) == 21:
                    isPlaying = False
                    print(f"{player.name} won with the hand {player.hand}")
                    break
                elif getBlackjackHandValue(player.hand) > 21:
                    player.willPlayThisTurn = False
                    print(f"{player.name} lost with a {getBlackjackHandValue(player.hand)} hand value")

cassino = Cassino()
players = [Player("Marquinhos"),Player("John")]

cassino.openTable()
print(players)
cassino.getTables()[0].addPlayer(players[0], players[1])
blackjack(cassino.getTables()[0])
