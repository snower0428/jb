/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, MQPJsonStyle, MQPJsonBase;

@interface MQPJsonCloumn : XXUnknownSuperclass {
@private
	NSString* _height;
	NSString* _width;
	MQPJsonStyle* _style;
	MQPJsonBase* _component;
	int _index;
}
@property(assign, nonatomic) int index;
@property(retain, nonatomic) MQPJsonBase* component;
@property(retain, nonatomic) MQPJsonStyle* style;
@property(retain, nonatomic) NSString* width;
@property(retain, nonatomic) NSString* height;
-(void)parse:(id)parse postDic:(id)dic;
-(void)parseInternel:(id)internel dict:(id)dict postDic:(id)dic;
-(void)dealloc;
-(id)init;
@end

