//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTBaseCell.h"

@class MTCustomerReview, MTCustomerReviewView;

@interface MTCustomerReviewCell : MTBaseCell
{
    MTCustomerReview *_review;
    MTCustomerReviewView *_customerReviewView;
}

@property(retain, nonatomic) MTCustomerReviewView *customerReviewView; // @synthesize customerReviewView=_customerReviewView;
@property(retain, nonatomic) MTCustomerReview *review; // @synthesize review=_review;
- (void).cxx_destruct;
- (void)viewHeightChanged:(id)arg1;

@end
