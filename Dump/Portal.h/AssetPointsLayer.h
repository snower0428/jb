/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Portal-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIImage;

@interface AssetPointsLayer : XXUnknownSuperclass {
@private
	UIImage* _bright1stImage;
	UIImage* _bright2ndImage;
	UIImage* _bright3rdImage;
	int _pointLoc;
}
@property(assign, nonatomic) int pointLoc;
@property(retain, nonatomic) UIImage* bright3rdImage;
@property(retain, nonatomic) UIImage* bright2ndImage;
@property(retain, nonatomic) UIImage* bright1stImage;
+(BOOL)needsDisplayForKey:(id)key;
-(void).cxx_destruct;
-(void)drawInContext:(CGContextRef)context;
-(id)initWithLayer:(id)layer;
@end

