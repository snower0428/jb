/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Portal-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class MAMapContents;

@interface MAAnnotationCollection : XXUnknownSuperclass {
@private
	MAMapContents* _mapContentDelegate;
}
@property(retain, nonatomic) MAMapContents* mapContentDelegate;
+(Class)layerClass;
-(void).cxx_destruct;
-(void)didAddSubview:(id)subview;
-(void)deselectAllAnnotations;
-(void)updateAllAnnotationView:(CGSize)view;
-(id)initWithMapContents:(id)mapContents;
@end

