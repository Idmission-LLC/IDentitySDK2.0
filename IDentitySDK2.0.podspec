Pod::Spec.new do |spec|


  spec.name         = "IDentitySDK2.0"
  spec.version      = "9.4.8.2.1"
  spec.summary      = "IDentitySDK lets user add IDentitySDK in their project"
  spec.description  = <<-DESC 
                    IDentitySDK helps user to add IDentitySDK in their project.
                    On integrating IDentitySDK user will be able to Capture Face & ID.
                    Also able to use various service ID mentioned in Documentation.
                   DESC
  
  spec.homepage     = "https://github.com/Idmission-LLC/IDentitySDK2.0"
  spec.license      = { :type => "MIT", :file => "LICENSE" }
  spec.author             = { "Idmission LLC" => "amol.deshmukh@idmission.com" }
  spec.source       = { :git => "https://github.com/Idmission-LLC/IDentitySDK2.0.git", 
                        :tag => "#{spec.version}"}

  spec.platform     = :ios
  spec.ios.deployment_target = '13.0'
  spec.swift_version = "5"
  spec.pod_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }
  spec.user_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }
  spec.ios.vendored_frameworks = 'IDentitySDK_Swift.xcframework'  
  spec.dependency "SelfieCapture"
  spec.dependency "IDCapture"

end