/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Portal-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray, NSTimer;

@interface CPTAnimation : XXUnknownSuperclass {
@private
	NSMutableArray* animationOperations;
	NSMutableArray* runningAnimationOperations;
	NSMutableArray* expiredAnimationOperations;
	NSTimer* timer;
	float timeOffset;
	int defaultAnimationCurve;
}
@property(retain, nonatomic) NSTimer* timer;
@property(retain, nonatomic) NSMutableArray* expiredAnimationOperations;
@property(retain, nonatomic) NSMutableArray* runningAnimationOperations;
@property(retain, nonatomic) NSMutableArray* animationOperations;
@property(assign, nonatomic) int defaultAnimationCurve;
@property(assign, nonatomic) float timeOffset;
+(SEL)setterFromProperty:(id)property;
+(id)animate:(id)animate property:(id)property period:(id)period animationCurve:(int)curve delegate:(id)delegate;
+(id)sharedInstance;
+(id)animate:(id)animate property:(id)property fromPlotRange:(id)plotRange toPlotRange:(id)plotRange4 duration:(float)duration;
+(id)animate:(id)animate property:(id)property fromPlotRange:(id)plotRange toPlotRange:(id)plotRange4 duration:(float)duration animationCurve:(int)curve delegate:(id)delegate;
+(id)animate:(id)animate property:(id)property fromPlotRange:(id)plotRange toPlotRange:(id)plotRange4 duration:(float)duration withDelay:(float)delay animationCurve:(int)curve delegate:(id)delegate;
+(id)animate:(id)animate property:(id)property fromDecimal:(XXStruct_XF3fkC)decimal toDecimal:(XXStruct_XF3fkC)decimal4 duration:(float)duration;
+(id)animate:(id)animate property:(id)property fromDecimal:(XXStruct_XF3fkC)decimal toDecimal:(XXStruct_XF3fkC)decimal4 duration:(float)duration animationCurve:(int)curve delegate:(id)delegate;
+(id)animate:(id)animate property:(id)property fromDecimal:(XXStruct_XF3fkC)decimal toDecimal:(XXStruct_XF3fkC)decimal4 duration:(float)duration withDelay:(float)delay animationCurve:(int)curve delegate:(id)delegate;
+(id)animate:(id)animate property:(id)property fromRect:(CGRect)rect toRect:(CGRect)rect4 duration:(float)duration;
+(id)animate:(id)animate property:(id)property fromRect:(CGRect)rect toRect:(CGRect)rect4 duration:(float)duration animationCurve:(int)curve delegate:(id)delegate;
+(id)animate:(id)animate property:(id)property fromRect:(CGRect)rect toRect:(CGRect)rect4 duration:(float)duration withDelay:(float)delay animationCurve:(int)curve delegate:(id)delegate;
+(id)animate:(id)animate property:(id)property fromSize:(CGSize)size toSize:(CGSize)size4 duration:(float)duration;
+(id)animate:(id)animate property:(id)property fromSize:(CGSize)size toSize:(CGSize)size4 duration:(float)duration animationCurve:(int)curve delegate:(id)delegate;
+(id)animate:(id)animate property:(id)property fromSize:(CGSize)size toSize:(CGSize)size4 duration:(float)duration withDelay:(float)delay animationCurve:(int)curve delegate:(id)delegate;
+(id)animate:(id)animate property:(id)property fromPoint:(CGPoint)point toPoint:(CGPoint)point4 duration:(float)duration;
+(id)animate:(id)animate property:(id)property fromPoint:(CGPoint)point toPoint:(CGPoint)point4 duration:(float)duration animationCurve:(int)curve delegate:(id)delegate;
+(id)animate:(id)animate property:(id)property fromPoint:(CGPoint)point toPoint:(CGPoint)point4 duration:(float)duration withDelay:(float)delay animationCurve:(int)curve delegate:(id)delegate;
+(id)animate:(id)animate property:(id)property from:(float)from to:(float)to duration:(float)duration;
+(id)animate:(id)animate property:(id)property from:(float)from to:(float)to duration:(float)duration animationCurve:(int)curve delegate:(id)delegate;
+(id)animate:(id)animate property:(id)property from:(float)from to:(float)to duration:(float)duration withDelay:(float)delay animationCurve:(int)curve delegate:(id)delegate;
-(id)description;
-(/*function-pointer*/ void*)timingFunctionForAnimationCurve:(int)animationCurve;
-(void)update:(id)update;
-(void)removeAllAnimationOperations;
-(void)removeAnimationOperation:(id)operation;
-(id)addAnimationOperation:(id)operation;
-(void)dealloc;
-(id)init;
@end
