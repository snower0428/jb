//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTBaseCell.h"

@class MTMerchant, MTTableView, UILabel;

@interface MTMovieShowtimesView : MTBaseCell
{
    MTTableView *_tableView;
    UILabel *_statusLabel;
    BOOL _cinemaSupportsReservation;
    MTMerchant *_merchant;
}

@property(nonatomic) BOOL cinemaSupportsReservation; // @synthesize cinemaSupportsReservation=_cinemaSupportsReservation;
@property(retain, nonatomic) MTMerchant *merchant; // @synthesize merchant=_merchant;
- (void).cxx_destruct;
- (float)heightOfTableViewWithValidShowtimes:(id)arg1;
- (void)setMovie:(id)arg1 andShowtimes:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end
