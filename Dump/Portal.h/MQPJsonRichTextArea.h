/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MQPJsonBase.h"

@class NSString;

@interface MQPJsonRichTextArea : MQPJsonBase {
@private
	NSString* _type;
	NSString* _url;
	NSString* _text;
}
@property(retain, nonatomic) NSString* text;
@property(retain, nonatomic) NSString* url;
@property(retain, nonatomic) NSString* type;
-(void)parse:(id)parse postDic:(id)dic;
-(void)dealloc;
-(id)init;
@end
