//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBIconView.h"

#import "SBFolderIconObserver.h"

@class NSMutableSet, SBDownloadingProgressBar, SBFolderIcon, UIImageView;

@interface SBFolderIconView : SBIconView <SBFolderIconObserver>
{
    UIImageView *_iconBackgroundView;
    UIImageView *_iconForegroundView;
    SBDownloadingProgressBar *_progressBar;
    NSMutableSet *_animatingIcons;
    unsigned int _currentScrollRow;
    BOOL _skippingGridIcons;
    float _miniIconVisibleOffset;
}

- (void)folderIcon:(id)arg1 didUpdateGridImage:(id)arg2 withSkipping:(BOOL)arg3 forContainedIconImageUpdate:(id)arg4;
- (void)iconAccessoriesDidUpdate:(id)arg1;
- (void)iconImageDidUpdate:(id)arg1;
- (void)prepareForRecycling;
- (void)_updateProgressBar;
- (double)grabDurationForEvent:(id)arg1;
- (BOOL)delaysUnhighlightWhenTapped;
- (BOOL)allowsTapWhileEditing;
- (id)description;
- (id)folder;
- (void)positionCloseBoxOfType:(int)arg1;
- (id)iconBackgroundView;
- (id)progressBar;
- (void)setPartialGhostly:(float)arg1 requester:(int)arg2;
- (void)setGhostly:(BOOL)arg1 requester:(int)arg2;
- (void)placeGhostlyImageView;
- (id)_iconBoundsForAccessory:(struct CGRect *)arg1;
- (struct CGRect)frameForIconOverlay;
- (void)showDropGlow:(BOOL)arg1;
- (struct CGAffineTransform)transformToMakeIconBorderExpandToSizeOfDropGlow;
- (void)positionIconImageView;
- (void)_positionMiniGrid;
- (id)iconImageSnapshot:(id)arg1;
- (id)snapshotSettings;
- (id)_folderForegroundImage;
- (id)_folderBackgroundImage;
- (struct CGRect)rectForMiniIconAtIndex:(unsigned int)arg1;
- (void)setIsOverlapping:(BOOL)arg1;
- (void)setIconScrollPosition:(int)arg1 animated:(BOOL)arg2;
- (void)setIcon:(id)arg1;
- (void)setFolderIcon:(id)arg1;
@property(readonly) SBFolderIcon *folderIcon;
- (void)dealloc;

@end

