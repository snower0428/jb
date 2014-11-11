//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTBaseCellControl.h"

@class MTMovie, UIImageView, UILabel;

@interface MTMovieTitleControl : MTBaseCellControl
{
    UILabel *_nameLabel;
    UILabel *_ratingLabel;
    UILabel *_runtimeLabel;
    UIImageView *_preSaleIconView;
    UIImageView *_3DIMAXIconView;
    MTMovie *_movie;
}

@property(retain, nonatomic) MTMovie *movie; // @synthesize movie=_movie;
- (void).cxx_destruct;
- (float)widthOfNameLabelWithMovie:(id)arg1;
- (id)initWithStyle:(int)arg1;

@end
