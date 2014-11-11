/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, APPasswordStorage, NSMutableArray;

@interface APLoginHistoryManager : XXUnknownSuperclass {
@private
	APPasswordStorage* _passwordSt;
	int _loginType;
	int _maxHistoryCount;
	NSMutableArray* _historyItems;
	NSString* _lastAccountType;
}
@property(retain, nonatomic) NSString* lastAccountType;
@property(assign, nonatomic) int maxHistoryCount;
@property(retain, nonatomic) APPasswordStorage* passwordSt;
@property(retain, nonatomic) NSMutableArray* historyItems;
@property(assign, nonatomic) int loginType;
+(id)loginHistoryManager;
-(void)synchronize;
-(void)clearMemoryData;
-(void)saveData;
-(void)loadData;
-(BOOL)historyAllCleared;
-(id)removeItemForAccount:(id)account;
-(id)removeItem:(id)item;
-(void)addItem:(id)item keepOldWithKeys:(id)keys;
-(void)addItem:(id)item;
-(void)updateItem:(id)item oldItem:(id)item2 withKey:(id)key;
-(id)itemWithAccount:(id)account ofType:(int)type;
-(id)itemWithAccount:(id)account;
-(id)topItem;
-(id)lastItem;
-(id)lastTaobaoItem;
-(id)lastAlipayItem;
-(id)currentItems;
-(id)initWithloginManager:(id)manager;
-(void)encodeWithCoder:(id)coder;
-(void)dealloc;
@end
