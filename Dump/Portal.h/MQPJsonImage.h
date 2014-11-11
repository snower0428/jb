/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MQPJsonBase.h"

@class NSString, UIImage;

@interface MQPJsonImage : MQPJsonBase {
@private
	NSString* _type;
	NSString* _imgUrl;
	UIImage* _imgData;
	UIImage* _imgDataForPushState;
}
@property(retain, nonatomic) UIImage* imgDataForPushState;
@property(retain, nonatomic) UIImage* imgData;
@property(retain, nonatomic) NSString* imgUrl;
@property(retain, nonatomic) NSString* type;
-(void)initProperty;
-(BOOL)setAttrSrc:(id)src;
-(id)getAttrSrc;
-(void)parse:(id)parse;
-(void)parse:(id)parse postDic:(id)dic;
-(void)parseImg:(id)img;
-(void)dealloc;
-(id)init;
@end

