/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BaseReq.h"

@class WXMediaMessage;

@interface ShowMessageFromWXReq : BaseReq {
@private
	WXMediaMessage* message;
}
@property(retain, nonatomic) WXMediaMessage* message;
-(void)dealloc;
-(id)init;
@end
