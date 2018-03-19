//
//  ViewController.swift
//  iOSApp
//
//  Created by Jitin SHARMA on 16/03/18.
//  Copyright © 2018 Jitin SHARMA. All rights reserved.
//

import UIKit
import Base

class ViewController: UIViewController {

    @IBOutlet weak var sumView: UITextField!
    override func viewDidLoad() {
        super.viewDidLoad()
        let base = BaseHelper()
        
        sumView.text = "Sum: \(base.getSum(first: 2, second: 3))"
        let value = base.sliceFilterAndSort(list: ["Adam","Aakash","John","Enrique","Abhishek"])
        Int
        value.forEach { (value) in
            NSLog(value)
        }
        
        let model = BaseModel(id: 2, type: "model1")
        let model2 = model.doCopy(id: 3, type: model.type)
        NSLog("\(model2)")
        
        let key = Base.API_KEY()
        let helperId = BaseHelperCompanion.init().helperId
        NSLog(key)
        NSLog("\(helperId)")
    }

    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }


}

