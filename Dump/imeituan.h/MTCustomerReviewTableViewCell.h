//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTTableViewCell.h"

@class MTCustomerReviewView, UIImageView;

@interface MTCustomerReviewTableViewCell : MTTableViewCell
{
    UIImageView *_seperatorLine;
    MTCustomerReviewView *_realView;
}

@property(retain, nonatomic) MTCustomerReviewView *realView; // @synthesize realView=_realView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setItem:(id)arg1;
- (id)initWithStyle:(int)arg1;

@end
