/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class DTMicroApplication, NSMutableArray, DFMicroApplicationFactory;

@interface DFMicroApplicationManager : XXUnknownSuperclass {
@private
	NSMutableArray* _applications;
	NSMutableArray* _applicationStack;
	DFMicroApplicationFactory* _applicationFactory;
	DTMicroApplication* _launcherApplication;
}
@property(retain, nonatomic) DTMicroApplication* launcherApplication;
@property(retain, nonatomic) DFMicroApplicationFactory* applicationFactory;
@property(retain, nonatomic) NSMutableArray* applicationStack;
@property(retain, nonatomic) NSMutableArray* applications;
-(void).cxx_destruct;
-(id)previousApplicationOfApplication:(id)application;
-(id)currentApplication;
-(BOOL)exitApplicationAtIndex:(int)index animated:(BOOL)animated options:(id)options;
-(void)applicationWillTerminate:(id)application animated:(BOOL)animated;
-(id)exitApplication:(id)application animated:(BOOL)animated options:(id)options;
-(id)exitApplication:(id)application animated:(BOOL)animated;
-(BOOL)startApplication:(id)application params:(id)params launchMode:(int)mode;
-(BOOL)startApplication:(id)application params:(id)params animated:(BOOL)animated;
-(BOOL)startLauncherApplication;
-(id)applicationForName:(id)name createIfNotExits:(BOOL)exits;
-(id)init;
@end

