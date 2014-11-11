/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray;

@interface CouponListFunctionManager : XXUnknownSuperclass {
	NSMutableArray* _couponArray;
@private
	int _currentPage;
	int _pageSize;
	int _totolPage;
}
@property(assign, nonatomic) int totolPage;
@property(assign, nonatomic) int pageSize;
@property(assign, nonatomic) int currentPage;
@property(retain, nonatomic) NSMutableArray* couponArray;
+(id)sharedInstance;
-(void).cxx_destruct;
-(id)getCouponInSection:(unsigned)section row:(unsigned)row;
-(unsigned)numberOfAccountInSection:(unsigned)section;
-(unsigned)numberOfAccountSection;
-(void)updateCouponList:(BOOL)list refreshType:(id)type;
-(void)_initCouponArray;
-(void)initCurrentPage;
-(id)init;
@end
