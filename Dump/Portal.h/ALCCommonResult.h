/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ALCToString.h"

@class NSString;

@interface ALCCommonResult : ALCToString {
@private
	BOOL _success;
	NSString* _resultCode;
	NSString* _resultDesc;
	NSString* _resultView;
	NSString* _creditUserId;
}
@property(retain, nonatomic) NSString* creditUserId;
@property(retain, nonatomic) NSString* resultView;
@property(retain, nonatomic) NSString* resultDesc;
@property(retain, nonatomic) NSString* resultCode;
@property(assign, nonatomic) BOOL success;
-(void).cxx_destruct;
@end

