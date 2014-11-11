//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "TMButtonGroupDelegate.h"
#import "TMImageDownloaderDelegate.h"

@class TMButtonGroup, TMSPortalGroup;

@interface PortalGroupView : UIView <TMButtonGroupDelegate, TMImageDownloaderDelegate>
{
    TMButtonGroup *_buttonGroup;
    TMSPortalGroup *_portalData;
    id <PortalGroupViewDelegate> _delegate;
}

@property(nonatomic) id <PortalGroupViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) TMSPortalGroup *portalData; // @synthesize portalData=_portalData;
@property(retain, nonatomic) TMButtonGroup *buttonGroup; // @synthesize buttonGroup=_buttonGroup;
- (void).cxx_destruct;
- (void)buttonGroup:(id)arg1 didSelectAtIndex:(unsigned int)arg2;
- (void)tmImageDownloaderSuccess:(id)arg1 request:(id)arg2 data:(id)arg3;
- (void)setPortalGroupData:(id)arg1;
- (void)dealloc;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
