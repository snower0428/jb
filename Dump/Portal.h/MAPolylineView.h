/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MAOverlayPathView.h"

@class MAPolyline;

@interface MAPolylineView : MAOverlayPathView {
}
@property(readonly, assign, nonatomic) MAPolyline* polyline;
-(id)initWithPolyline:(id)polyline;
-(void)setFillColor:(id)color;
-(void)createPath;
@end

