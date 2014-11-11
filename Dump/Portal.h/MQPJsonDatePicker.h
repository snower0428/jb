/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MQPJsonBase.h"

@class NSString;

@interface MQPJsonDatePicker : MQPJsonBase {
@private
	NSString* _type;
	NSString* _name;
	NSString* _value;
	NSString* _dateStart;
	NSString* _dateEnd;
	NSString* _dateFormat;
}
@property(retain, nonatomic) NSString* dateFormat;
@property(retain, nonatomic) NSString* dateEnd;
@property(retain, nonatomic) NSString* dateStart;
@property(retain, nonatomic) NSString* value;
@property(retain, nonatomic) NSString* name;
@property(retain, nonatomic) NSString* type;
-(void)initProperty;
-(BOOL)setAttrDateFormat:(id)format;
-(id)getAttrDateFormat;
-(BOOL)setAttrDateEnd:(id)end;
-(id)getAttrDateEnd;
-(BOOL)setAttrDateStart:(id)start;
-(id)getAttrDateStart;
-(BOOL)setAttrName:(id)name;
-(id)getAttrName;
-(BOOL)setAttrValue:(id)value;
-(id)getAttrValue;
-(void)parse:(id)parse postDic:(id)dic;
-(void)dealloc;
-(id)init;
@end
