/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BaseResp.h"

@class NSString, WXMediaMessage;

@interface GetMessageFromWXResp : BaseResp {
@private
	BOOL bText;
	NSString* text;
	WXMediaMessage* message;
}
@property(assign, nonatomic) BOOL bText;
@property(retain, nonatomic) WXMediaMessage* message;
@property(retain, nonatomic) NSString* text;
-(void)dealloc;
-(id)init;
@end
