/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BaseOperation.h"

@class NSArray, NSString, NSMutableArray;

@interface SupportTransferBankListOperation : BaseOperation {
	NSString* _bankShortName;
	NSMutableArray* supportBankList;
}
@property(readonly, assign, nonatomic) NSArray* supportBankList;
-(void)main;
-(id)initWithBankShortName:(id)bankShortName;
-(void)dealloc;
@end

