/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Portal-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


@interface DBOeratoin : XXUnknownSuperclass {
}
+(BOOL)createTable:(sqlite3*)table;
+(sqlite3*)openDatabase;
+(id)shared;
-(id)init;
-(id)queryByKey:(int)key database:(sqlite3*)database;
-(void)removeCacheByKey:(int)key database:(sqlite3*)database;
-(void)cacheData:(sqlite3*)data data:(id)data2;
@end

