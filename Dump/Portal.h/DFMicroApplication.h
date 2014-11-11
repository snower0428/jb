/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "DTMicroApplication.h"

@class NSMutableArray, DTMicroApplicationDescriptor;
@protocol DTMicroApplicationDelegate;

@interface DFMicroApplication : DTMicroApplication {
@private
	DTMicroApplicationDescriptor* _descriptor;
	id<DTMicroApplicationDelegate> _delegate;
	NSMutableArray* _viewControllers;
}
@property(retain, nonatomic) NSMutableArray* viewControllers;
+(id)currentApplication;
-(void)setDelegate:(id)delegate;
-(id)delegate;
-(void)setDescriptor:(id)descriptor;
-(id)descriptor;
-(void).cxx_destruct;
-(id)description;
-(void)exitAnimated:(BOOL)animated;
-(id)rootController;
-(void)dealloc;
-(id)init;
@end

