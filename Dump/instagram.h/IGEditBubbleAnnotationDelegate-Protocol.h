//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGEditBubbleAnnotationView, IGQuadtreeCluster;

@protocol IGEditBubbleAnnotationDelegate <NSObject>
- (BOOL)canZoomToCluster:(IGQuadtreeCluster *)arg1;
- (void)editBubbleAnnotationView:(IGEditBubbleAnnotationView *)arg1 onZoomToCluster:(IGQuadtreeCluster *)arg2;
- (void)editBubbleAnnotationView:(IGEditBubbleAnnotationView *)arg1 onEditCluster:(IGQuadtreeCluster *)arg2;
@end
