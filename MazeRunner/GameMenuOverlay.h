//
//  InGameMenuOverlay.h
//  MazeRunner
//
//  Created by Cihan Emre Kisakurek (Company) on 09/11/15.
//  Copyright © 2015 cekisakurek. All rights reserved.
//

#import <SpriteKit/SpriteKit.h>
#import "GameScene.h"
@interface GameMenuOverlay : SKScene


+ (instancetype)overlayWithGameScene:(GameScene *)gameScene;

@end
