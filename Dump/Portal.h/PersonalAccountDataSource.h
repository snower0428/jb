/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"

@protocol PersonalAccountDataDelegate;

@protocol PersonalAccountDataSource <NSObject>
@property(assign, nonatomic) __weak id<PersonalAccountDataDelegate> personalAccountDataDelegate;
-(void)requestPersonalAccount;
@end

