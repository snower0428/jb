//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBMBaseRowItem.h"

@class TBMV4Cinema;

@interface TBMCinemaListRowItem : TBMBaseRowItem
{
    BOOL _isFav;
    TBMV4Cinema *_cinema;
}

+ (id)itemWithCinema:(id)arg1;
@property(nonatomic) BOOL isFav; // @synthesize isFav=_isFav;
@property(retain, nonatomic) TBMV4Cinema *cinema; // @synthesize cinema=_cinema;
- (void)dealloc;

@end
