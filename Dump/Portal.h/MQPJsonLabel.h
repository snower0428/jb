/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MQPJsonBase.h"

@class MQPJsonImage, NSString;

@interface MQPJsonLabel : MQPJsonBase {
@private
	BOOL _singleLine;
	NSString* _type;
	NSString* _text;
	MQPJsonImage* _icon;
	int _iconAlign;
	int _countdown;
	int _countdown_interval;
}
@property(assign, nonatomic) BOOL singleLine;
@property(assign, nonatomic) int countdown_interval;
@property(assign, nonatomic) int countdown;
@property(assign, nonatomic) int iconAlign;
@property(retain, nonatomic) MQPJsonImage* icon;
@property(retain, nonatomic) NSString* text;
@property(retain, nonatomic) NSString* type;
-(void)initProperty;
-(BOOL)setAttrCountdownInterval:(id)interval;
-(id)getAttrCountdownInterval;
-(BOOL)setAttrCountdown:(id)countdown;
-(id)getAttrCountdown;
-(BOOL)setAttrText:(id)text;
-(id)getAttrText;
-(void)parse:(id)parse postDic:(id)dic;
-(void)dealloc;
-(id)init;
@end

