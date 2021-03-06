//
//  SHGameViewController.h
//  2048
//
//  Created by Pulkit Goyal on 15/03/14.
//  Copyright (c) 2014 Shyahi. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SHMenuViewController.h"
#import "SHMenuTiltModeViewController.h"
#import "SHGameCenterManager.h"
#import "SHHowToPlayViewController.h"

@class SHFacebookController;
@class SHGameCenterManager;
@class SHMultiplayerHeaderView;
@class FBKVOController;
@class SHHowToPlayViewController;

static const int kSHGameBoardSize = 4;

static const float kSHCellAnimationsDuration = 0.15;
static NSString *const kSHBestUserScoreKey = @"SH_BEST_USER_SCORE";
static const int kSHGameMaxScore = 2048;
static NSString *const kSHUserDefaultsGameOptionTiltEnabled = @"SH_GAME_OPTION_TILT_ENABLED";

static NSString *const kSHLeaderboardIdentifierMultiplayer = @"com.shyahi.2048.multiplayer";

static NSString *const kSHLeaderboardIdentifierSingleplayer = @"com.shyahi.2048.singleplayer";

@interface SHGameViewController : UIViewController <UICollectionViewDataSource, SHMenuDelegate, SHMenuTiltDelegate, SHGameCenterManagerDelegate, SHMenuHowToPlayDelegate, GKGameCenterControllerDelegate>
@property(nonatomic) BOOL isMultiplayer;

- (void)switchToMultiplayerModeWithMatch:(GKTurnBasedMatch *)match;
@end

@interface SHBoardMoveResult : NSObject
@property(nonatomic) int score;
@property(nonatomic) BOOL moved;

- (instancetype)initWithScore:(int)score moved:(BOOL)moved;

+ (instancetype)resultWithScore:(int)score moved:(BOOL)moved;

@end