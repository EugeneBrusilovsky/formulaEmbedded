
(cl:in-package :asdf)

(defsystem "fsae_electric_vehicle-msg"
  :depends-on (:roslisp-msg-protocol :roslisp-utils )
  :components ((:file "_package")
    (:file "gravitational_forces" :depends-on ("_package_gravitational_forces"))
    (:file "_package_gravitational_forces" :depends-on ("_package"))
    (:file "steering_input" :depends-on ("_package_steering_input"))
    (:file "_package_steering_input" :depends-on ("_package"))
    (:file "suspension_offset" :depends-on ("_package_suspension_offset"))
    (:file "_package_suspension_offset" :depends-on ("_package"))
    (:file "tire_pressure" :depends-on ("_package_tire_pressure"))
    (:file "_package_tire_pressure" :depends-on ("_package"))
    (:file "wheel_velocity" :depends-on ("_package_wheel_velocity"))
    (:file "_package_wheel_velocity" :depends-on ("_package"))
  ))