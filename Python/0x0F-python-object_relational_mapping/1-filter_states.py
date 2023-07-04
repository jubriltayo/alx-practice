#!/usr/bin/python3
import MySQLdb

if __name__ == '__main__':
    db = MySQLdb.connect(host='localhost', port=3306, user='root', passwd='', db='hbtn_0e_0_usa')
    cur = db.cursor()
    cur.execute("SELECT * FROM states WHERE name LIKE BINARY 'N%' ORDER BY states.id")
    
    states = cur.fetchall()

    for state in states:
        print(state)
    cur.close()
    db.close()