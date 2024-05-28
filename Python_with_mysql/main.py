from secrets import choice
from dbhelper import DBHelper


def main():


    db=DBHelper()

    while True:
        print()
        print()
        print("********WELCOME********")
        print()
        print("press 1 to insert new user")
        print("press 2 to display all user")
        print("press 3 to delete user")
        print("press 4 to update user")
        print("press 5 to exit program")
        print()

        try :
            choice=int(input())
            if(choice==1):
               #insert user
               uid=int(input("Enter user id: "))
               username=input("Enter user name: ")
               userphone=input("Enter user phone: ")
               db.insert_user(uid,username,userphone)
               
                
               
            elif choice==2 :
                #display user
                db.fetch_all()
                
            elif choice==3 :
                #delete user
                userid=int(input("Enter userId, which u want to delete: "))
                db.delete_data(userid)
                
            elif choice==4 :
                #update user
                uid=int(input("Enter user id: "))
                username=input("New name: ")
                userphone=input("New phone: ")
                db.update_user(uid,username,userphone)
                pass
                
            elif choice==5 :
                # exit program
                break
            else :
                print("Invalid Input! Try Again...")

        except Exception as e:
            print(e)
            print("invalid Details! Try Again...")


if __name__=="__main__":
    main()

            

        
    



