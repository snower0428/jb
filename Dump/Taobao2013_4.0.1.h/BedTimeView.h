//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "TMButtonGroupDelegate.h"
#import "TMImageDownloaderDelegate.h"

@class TMButtonGroup, TMSBedTimeGroup, UILabel;

@interface BedTimeView : UIView <TMButtonGroupDelegate, TMImageDownloaderDelegate>
{
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
    TMButtonGroup *_buttonGroup;
    id <BedTimeViewDelegate> _delegate;
    TMSBedTimeGroup *_bedTimeData;
}

@property(retain, nonatomic) TMSBedTimeGroup *bedTimeData; // @synthesize bedTimeData=_bedTimeData;
@property(nonatomic) id <BedTimeViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) TMButtonGroup *buttonGroup; // @synthesize buttonGroup=_buttonGroup;
@property(retain, nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)tmImageDownloaderSuccess:(id)arg1 request:(id)arg2 data:(id)arg3;
- (void)buttonGroup:(id)arg1 didSelectAtIndex:(unsigned int)arg2;
- (void)setBedTimeGroupData:(id)arg1;
- (void)dealloc;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

