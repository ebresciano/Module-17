//
//  SongTableViewController.h
//  PlaylistOBJTc
//
//  Created by Eva Marie Bresciano on 5/31/16.
//  Copyright © 2016 Eva Bresciano. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Playlist.h"

@interface SongTableViewController : UITableViewController

@property (strong, nonatomic) Playlist *playlist;

@end
