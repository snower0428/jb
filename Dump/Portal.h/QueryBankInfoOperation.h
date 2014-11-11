/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BaseOperation.h"

@class NSString;

@interface QueryBankInfoOperation : BaseOperation {
@private
	NSString* _bankShortName;
	NSString* _bankNotice;
}
@property(copy, nonatomic) NSString* bankNotice;
@property(copy, nonatomic) NSString* bankShortName;
-(void)main;
-(id)initWithBankShortName:(id)bankShortName;
-(void)dealloc;
@end
