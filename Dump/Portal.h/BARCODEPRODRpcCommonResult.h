/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BARCODEPRODToString.h"

@class NSString;

@interface BARCODEPRODRpcCommonResult : BARCODEPRODToString {
@private
	BOOL _success;
	int _resultCode;
	NSString* _message;
}
@property(retain, nonatomic) NSString* message;
@property(assign, nonatomic) int resultCode;
@property(assign, nonatomic) BOOL success;
-(void).cxx_destruct;
@end
