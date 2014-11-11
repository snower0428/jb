/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Portal-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray, UIView;

@interface OPLibToAddedView : XXUnknownSuperclass {
@private
	UIView* _blank;
	UIView* _inside;
	float _minHeight;
	int _pageStatus;
	NSArray* _appDetails;
}
@property(copy, nonatomic) NSArray* appDetails;
+(BOOL)isDescViewEquals:(id)equals compareTo:(id)to;
-(void).cxx_destruct;
-(void)reloadAppIcon:(id)icon image:(id)image;
-(void)redrawView;
-(void)setMinHeight:(float)height;
-(int)pageStatus;
-(id)appIds;
-(BOOL)loadAppDetails:(id)details;
-(int)calcRowCount:(int)count;
-(id)initWithFrame:(CGRect)frame;
@end
