import mysql.connector as connector


class DBHelper:

    #  create table
    def __init__(self):
        self.con = connector.connect(host='localhost', port='3306',
                                     user='root', password='Akarsh12@', database='akdb')

        query = 'create table if not exists user(userId int primary key,userName varchar(200),phone varchar(12))'
        cur = self.con.cursor()
        cur.execute(query)
        print("created")
    


    # insert into table  
    def insert_user(self, userId, userName, phone):
        query = "insert into user(userId,userName,phone)values({},'{}','{}')".format(
            userId,userName, phone)
        # print(query)
        cur=self.con.cursor()
        cur.execute(query)
        self.con.commit()
        print("user saved to db ")


    # fetch data 
    def fetch_all(self):
        query="select * from user"
        cur=self.con.cursor()
        cur.execute(query)
        for row in cur:
            print("userId :",row[0])
            print("userName :",row[1])
            print("phone :",row[2])
            print()
            print()

    
    #delete data
    def delete_data(self,userId):
        query="delete from user where userId={}".format(userId)
        #print(query)
        c=self.con.cursor()
        c.execute(query)
        self.con.commit()
        print("deleted")

    #update table
    def update_user(self,userId,newName,newPhone):
        query="update user set userName='{}',phone='{}' where userId={}".format(newName,newPhone,userId)
        #print(query)
        cur=self.con.cursor()
        cur.execute(query)
        self.con.commit()
        print("updated")


