/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Portal-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIColor, NSTimer;

@interface ALPSCWaveAnimationView : XXUnknownSuperclass {
@private
	float _animationDuration;
	int _numberOfWaves;
	float _spawnInterval;
	float _spawnSize;
	float _scaleFactor;
	UIColor* _waveColor;
	int _wavesSpawned;
	int _wavesDone;
	NSTimer* _timer;
}
@property(retain, nonatomic) NSTimer* timer;
@property(assign, nonatomic) int wavesDone;
@property(assign, nonatomic) int wavesSpawned;
@property(retain, nonatomic) UIColor* waveColor;
@property(assign, nonatomic) float scaleFactor;
@property(assign, nonatomic) float spawnSize;
@property(assign, nonatomic) float spawnInterval;
@property(assign, nonatomic) int numberOfWaves;
@property(assign, nonatomic) float animationDuration;
+(id)waveAnimationAtPosition:(CGPoint)position forView:(id)view animationDuration:(float)duration numberOfWaves:(int)waves spawnInterval:(float)interval spawnSize:(float)size scaleFactor:(float)factor waveColor:(id)color;
-(void).cxx_destruct;
-(void)clearAll;
-(void)layerDidFinishAnimation;
-(void)spawnWave;
-(id)initWithFrame:(CGRect)frame;
-(void)dealloc;
@end

