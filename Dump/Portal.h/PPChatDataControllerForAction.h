/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "PPChatDataController.h"

@class NSString;

@interface PPChatDataControllerForAction : PPChatDataController {
@private
	NSString* _actionParam;
}
@property(retain, nonatomic) NSString* actionParam;
-(void).cxx_destruct;
-(BOOL)queryMessagesWithPublicId:(id)publicId argreementId:(id)anId startTime:(id)time endTime:(id)time4 limit:(int)limit messageTypes:(id)types completion:(id)completion minTime:(double)time8;
-(id)initWithPublicId:(id)publicId thirdPartyAccount:(id)account actionParam:(id)param;
@end

