/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "COCBaseRespVO.h"

@class NSArray, NSString;

@interface COCQueryRespVO : COCBaseRespVO {
@private
	NSString* _errorDesc;
	NSString* _errorCode;
	NSArray* _resultObject;
}
@property(retain, nonatomic) NSArray* resultObject;
@property(retain, nonatomic) NSString* errorCode;
@property(retain, nonatomic) NSString* errorDesc;
+(Class)resultObjectElementClass;
-(void).cxx_destruct;
@end

