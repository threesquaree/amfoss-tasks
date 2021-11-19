import hashlib

class MetaCoinBlock:
    
    def __init__(my, previous_block_hash, transaction_array):
        my.previous_block_hash = previous_block_hash
        my.transaction_array = transaction_array

        my.blockdata = " | ".join(transaction_array) + " | " + previous_block_hash
        my.blockhash = hashlib.sha256(my.blockdata.encode()).hexdigest()

trans_1 = "Rohit sends 5 MC to Parthiv"
trans_2 = "Karthik sends 7.1 MC to Divya"
trans_3 = "Adith sends 4.3 MC to Zack"
trans_4 = "Rohit sends 8.2 MC to Divya"
trans_5 = "Parthiv sends 2 MC to Manu"
trans_6 = "Akshay sends 3.7 MC to Alex"

first_block = MetaCoinBlock('Initial transaction', [trans_1, trans_2])

print(first_block.blockdata)
print(first_block.blockhash)

second_block = MetaCoinBlock(first_block.blockhash, [trans_3, trans_4])

print(second_block.blockdata)
print(second_block.blockhash)

third_block = MetaCoinBlock(first_block.blockhash, [trans_5, trans_6])

print(third_block.blockdata)
print(third_block.blockhash)

