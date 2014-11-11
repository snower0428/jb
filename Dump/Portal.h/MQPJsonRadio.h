/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MQPJsonBase.h"

@class NSString;

@interface MQPJsonRadio : MQPJsonBase {
@private
	unsigned char _checked;
	NSString* _type;
	NSString* _text;
	NSString* _name;
	NSString* _value;
}
@property(assign, nonatomic) unsigned char checked;
@property(retain, nonatomic) NSString* value;
@property(retain, nonatomic) NSString* name;
@property(retain, nonatomic) NSString* text;
@property(retain, nonatomic) NSString* type;
-(void)initProperty;
-(BOOL)setAttrChecked:(id)checked;
-(id)getAttrChecked;
-(BOOL)setAttrName:(id)name;
-(id)getAttrName;
-(BOOL)setAttrValue:(id)value;
-(id)getAttrValue;
-(BOOL)setAttrText:(id)text;
-(id)getAttrText;
-(void)parse:(id)parse postDic:(id)dic;
-(void)dealloc;
-(id)init;
@end

