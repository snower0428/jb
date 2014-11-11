//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTCalloutAnnotationView.h"

@class MTTableModel, MTTableView, UIImageView;

@interface MTDealsCalloutAnnotationView : MTCalloutAnnotationView
{
    MTTableView *_tableView;
    MTTableModel *_tableModel;
    UIImageView *_backgroundImageView;
}

@property(retain, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
- (void).cxx_destruct;
- (void)didClickDeal:(id)arg1;
- (void)updateDisplay:(id)arg1 dealsArray:(id)arg2;
- (void)setAnnotation:(id)arg1;

@end
