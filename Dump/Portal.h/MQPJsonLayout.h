/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSMutableArray;

@interface MQPJsonLayout : XXUnknownSuperclass {
@private
	NSString* _name;
	NSMutableArray* _rows;
	NSMutableArray* _list;
}
@property(retain, nonatomic) NSMutableArray* list;
@property(retain, nonatomic) NSMutableArray* rows;
@property(retain, nonatomic) NSString* name;
-(void)parseList:(id)list postDic:(id)dic;
-(void)parseInternel:(id)internel dict:(id)dict postDic:(id)dic;
-(void)parseEvents:(id)events postDic:(id)dic;
-(void)parse:(id)parse postDic:(id)dic;
-(void)dealloc;
-(id)init;
@end
