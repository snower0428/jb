//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface OrdersReq : NSObject
{
    int _isWin;
    NSString *_lotteryType;
    int _pageNum;
    int _rowsPerPage;
}

@property(nonatomic) int rowsPerPage; // @synthesize rowsPerPage=_rowsPerPage;
@property(nonatomic) int pageNum; // @synthesize pageNum=_pageNum;
@property(retain, nonatomic) NSString *lotteryType; // @synthesize lotteryType=_lotteryType;
@property(nonatomic) int isWin; // @synthesize isWin=_isWin;
- (void).cxx_destruct;

@end

