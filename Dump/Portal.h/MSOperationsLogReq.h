/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MSToString.h"

@class NSArray, NSString;

@interface MSOperationsLogReq : MSToString {
@private
	NSString* _loginId;
	NSArray* _normType;
	NSString* _status;
	int _pageNum;
	NSString* _direct;
	NSString* _startDate;
	NSString* _endDate;
}
@property(retain, nonatomic) NSString* endDate;
@property(retain, nonatomic) NSString* startDate;
@property(retain, nonatomic) NSString* direct;
@property(assign, nonatomic) int pageNum;
@property(retain, nonatomic) NSString* status;
@property(retain, nonatomic) NSArray* normType;
@property(retain, nonatomic) NSString* loginId;
+(Class)normTypeElementClass;
-(void).cxx_destruct;
@end

