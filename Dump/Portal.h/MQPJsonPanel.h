/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MQPJsonBase.h"

@class NSString, MQPJsonLayout;

@interface MQPJsonPanel : MQPJsonBase {
@private
	NSString* _type;
	MQPJsonLayout* _layout;
}
@property(retain, nonatomic) MQPJsonLayout* layout;
@property(retain, nonatomic) NSString* type;
-(void)parse:(id)parse postDic:(id)dic;
-(void)dealloc;
-(id)init;
@end

