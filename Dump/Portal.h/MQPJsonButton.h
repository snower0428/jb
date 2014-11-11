/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MQPJsonLabel.h"

@class NSString;
@protocol MQProtScriptReq;

@interface MQPJsonButton : MQPJsonLabel {
@private
	NSString* _name;
	NSString* _value;
	NSString* _action;
	NSString* _script;
	id<MQProtScriptReq> _luaProxy;
}
@property(retain, nonatomic) id<MQProtScriptReq> luaProxy;
@property(retain, nonatomic) NSString* script;
@property(retain, nonatomic) NSString* action;
@property(retain, nonatomic) NSString* value;
@property(retain, nonatomic) NSString* name;
-(void)initProperty;
-(BOOL)setAttrName:(id)name;
-(id)getAttrName;
-(BOOL)setAttrValue:(id)value;
-(id)getAttrValue;
-(void)parse:(id)parse postDic:(id)dic;
-(void)dealloc;
-(id)init;
@end
