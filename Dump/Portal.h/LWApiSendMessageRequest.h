/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "LWApiBaseRequest.h"

@class LWApiMessage;

@interface LWApiSendMessageRequest : LWApiBaseRequest {
@private
	LWApiMessage* _message;
}
@property(retain, nonatomic) LWApiMessage* message;
+(id)requestWithMessage:(id)message;
-(id)parse;
-(void)dealloc;
@end
